package com.example.praktikum_modul_7;

import java.util.UUID;

public class YoyoTrickStyle {
    private String id;
    private String playerName;
    private String styleType;

    public YoyoTrickStyle(String playerName, String styleType) {
        this.id = UUID.randomUUID().toString().substring(0, 8);
        this.playerName = playerName;
        this.styleType = styleType;
    }

    public String getId()
    { return id; }

    public String getPlayerName()
    { return playerName; }

    public void setPlayerName(String playerName)
    { this.playerName = playerName; }

    public String getStyleType()
    { return styleType; }

    public void setStyleType(String styleType)
    { this.styleType = styleType; }
}