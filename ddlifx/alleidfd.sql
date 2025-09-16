create table alleidaf
(
  aleivisn    char(8) default ' ' not null,
  aleioapp    char(180) default ' ' not null,
  aleiserv    char(100) default ' ' not null,
  aleiroth    char(50) default ' ' not null,
  aleircon    char(100) default ' ' not null,
  aleispar    char(73) default ' ' not null,
  lf          char(1)
);
create unique index alleida1 on alleidaf
(
aleivisn
);
revoke all on alleidaf from public ; 
grant select on alleidaf to public ; 
