package com.example.praktikum_modul_7;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.*;
import javafx.scene.control.cell.PropertyValueFactory;

import java.net.URL;
import java.util.ResourceBundle;

public class YoyoTrickController implements Initializable {

    @FXML private TextField txtPlayerName;
    @FXML private ComboBox<String> cmbStyle;
    @FXML private TableView<YoyoTrickStyle> table;
    @FXML private TableColumn<YoyoTrickStyle, String> colId;
    @FXML private TableColumn<YoyoTrickStyle, String> colName;
    @FXML private TableColumn<YoyoTrickStyle, String> colStyle;

    private TrickRepository repository = new InMemoryTrickRepository();
    private ObservableList<YoyoTrickStyle> observableList;

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        colId.setCellValueFactory(new PropertyValueFactory<>("id"));
        colName.setCellValueFactory(new PropertyValueFactory<>("playerName"));
        colStyle.setCellValueFactory(new PropertyValueFactory<>("styleType"));

        cmbStyle.getItems().addAll("Technical", "Speed", "Whips", "Body Tricks", "Horizontal");

        refreshTable();

        table.getSelectionModel().selectedItemProperty().addListener((obs, oldSelection, newSelection) -> {
            if (newSelection != null) {
                txtPlayerName.setText(newSelection.getPlayerName());
                cmbStyle.setValue(newSelection.getStyleType());
            }
        });
    }

    @FXML
    protected void onAdd() {
        String name = txtPlayerName.getText();
        String style = cmbStyle.getValue();

        if (name != null && !name.isEmpty() && style != null) {
            repository.create(new YoyoTrickStyle(name, style));
            refreshTable();
            clearFields();
        } else {
            showAlert("Error", "Mohon isi nama dan pilih style!");
        }
    }

    @FXML
    protected void onUpdate() {
        YoyoTrickStyle selected = table.getSelectionModel().getSelectedItem();
        if (selected != null) {
            repository.update(selected.getId(), txtPlayerName.getText(), cmbStyle.getValue());
            refreshTable();
            clearFields();
        } else {
            showAlert("Warning", "Pilih data dulu untuk diupdate.");
        }
    }

    @FXML
    protected void onDelete() {
        YoyoTrickStyle selected = table.getSelectionModel().getSelectedItem();
        if (selected != null) {
            repository.delete(selected.getId());
            refreshTable();
            clearFields();
        } else {
            showAlert("Warning", "Pilih data dulu untuk dihapus.");
        }
    }

    @FXML
    protected void onClear() {
        clearFields();
    }

    private void refreshTable() {
        observableList = FXCollections.observableArrayList(repository.readAll());
        table.setItems(observableList);
    }

    private void clearFields() {
        txtPlayerName.clear();
        cmbStyle.getSelectionModel().clearSelection();
        table.getSelectionModel().clearSelection();
    }

    private void showAlert(String title, String message) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle(title);
        alert.setHeaderText(null);
        alert.setContentText(message);
        alert.showAndWait();
    }
}