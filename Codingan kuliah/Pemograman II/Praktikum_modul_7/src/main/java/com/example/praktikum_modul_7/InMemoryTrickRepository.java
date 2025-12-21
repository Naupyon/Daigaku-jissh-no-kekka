package com.example.praktikum_modul_7;

import java.util.ArrayList;
import java.util.List;

public class InMemoryTrickRepository implements TrickRepository {
    private List<YoyoTrickStyle> dataList;

    public InMemoryTrickRepository() {
        this.dataList = new ArrayList<>();
    }

    @Override
    public void create(YoyoTrickStyle trick) {
        dataList.add(trick);
    }

    @Override
    public List<YoyoTrickStyle> readAll() {
        return new ArrayList<>(dataList);
    }

    @Override
    public void update(String id, String newPlayerName, String newStyle) {
        for (YoyoTrickStyle trick : dataList) {
            if (trick.getId().equals(id)) {
                trick.setPlayerName(newPlayerName);
                trick.setStyleType(newStyle);
                break;
            }
        }
    }

    @Override
    public void delete(String id) {
        dataList.removeIf(trick -> trick.getId().equals(id));
    }
}