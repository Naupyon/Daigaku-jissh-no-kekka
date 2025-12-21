package com.example.praktikum_modul_7;

import java.util.List;

public interface TrickRepository {
    void create(YoyoTrickStyle trick);
    List<YoyoTrickStyle> readAll();
    void update(String id, String newPlayerName, String newStyle);
    void delete(String id);
}