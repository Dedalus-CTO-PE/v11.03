create table patecoaf
(
  dpteoadm    char(8) default ' ' not null,
  dpteoepn    char(2) default ' ' not null,
  dpteocnt    char(3) default ' ' not null,
  pteocode    char(9) default ' ' not null,
  pteotype    char(1) default ' ' not null,
  dpteounq    char(3) default ' ' not null,
  pteodtcd    char(8) default ' ' not null,
  pteooper    char(4) default ' ' not null,
  pteodate    char(8) default ' ' not null,
  pteosttm    char(5) default ' ' not null,
  pteoedtm    char(5) default ' ' not null,
  pteotime    char(5) default ' ' not null,
  pteousid    char(10) default ' ' not null,
  pteodrgd    char(1) default ' ' not null,
  pteodesc    char(200) default ' ' not null,
  pteoclin    char(10) default ' ' not null,
  pteoccfl    char(2) default ' ' not null,
  pteospar    char(36) default ' ' not null,
  lf          char(1)
);
create unique index patecoa1 on patecoaf
(
dpteoadm,
dpteoepn,
dpteocnt
);
create unique index patecoa2 on patecoaf
(
dpteoadm,
dpteounq,
dpteoepn,
dpteocnt
);
create unique index patecoa3 on patecoaf
(
pteocode,
dpteoadm,
dpteounq,
dpteoepn,
dpteocnt
);
create unique index patecoa4 on patecoaf
(
pteodtcd,
dpteoadm,
dpteoepn,
dpteocnt
);
revoke all on patecoaf from public ; 
grant select on patecoaf to public ; 
