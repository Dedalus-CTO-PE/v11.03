create table patbrdaf
(
  ptbrbrdn    char(10) default ' ' not null,
  ptbrurno    char(8) default ' ' not null,
  ptbrvisn    char(8) default ' ' not null,
  ptbrcntr    char(2) default ' ' not null,
  ptbrlurn    char(8) default ' ' not null,
  ptbrtitl    char(4) default ' ' not null,
  ptbrsnam    char(35) default ' ' not null,
  ptbrgnam    char(35) default ' ' not null,
  ptbrgend    char(1) default ' ' not null,
  ptbrbdat    char(8) default ' ' not null,
  ptbradr1    char(35) default ' ' not null,
  ptbradr2    char(35) default ' ' not null,
  ptbradr3    char(35) default ' ' not null,
  ptbradr4    char(35) default ' ' not null,
  ptbrpost    char(8) default ' ' not null,
  ptbrhphn    char(20) default ' ' not null,
  ptbrwphn    char(20) default ' ' not null,
  ptbrmphn    char(20) default ' ' not null,
  ptbremal    char(50) default ' ' not null,
  ptbrhosp    char(3) default ' ' not null,
  ptbrsdat    char(8) default ' ' not null,
  ptbrstim    char(8) default ' ' not null,
  ptbredat    char(8) default ' ' not null,
  ptbretim    char(8) default ' ' not null,
  ptbrcusr    char(10) default ' ' not null,
  ptbrcdat    char(8) default ' ' not null,
  ptbrctim    char(8) default ' ' not null,
  ptbruusr    char(10) default ' ' not null,
  ptbrudat    char(8) default ' ' not null,
  ptbrutim    char(8) default ' ' not null,
  ptbrspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patbrda1 on patbrdaf
(
ptbrbrdn
);
create unique index patbrda2 on patbrdaf
(
ptbrurno,
ptbrbrdn
);
create unique index patbrda3 on patbrdaf
(
ptbrvisn,
ptbrbrdn,
ptbrurno
);
create unique index patbrda4 on patbrdaf
(
ptbrhosp,
ptbrbrdn
);
revoke all on patbrdaf from public ; 
grant select on patbrdaf to public ; 
