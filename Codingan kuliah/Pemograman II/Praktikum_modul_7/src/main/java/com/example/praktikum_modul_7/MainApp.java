package com.example.praktikum_modul_7;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.IOException;

public class MainApp extends Application {

    @Override
    public void start(Stage stage) throws IOException {
        // Memuat file FXML
        FXMLLoader fxmlLoader = new FXMLLoader(MainApp.class.getResource("YoyoTrickView.fxml"));

        Scene scene = new Scene(fxmlLoader.load(), 500, 500);
        stage.setTitle("Yoyo TrickStyle Manager (FXML)");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}