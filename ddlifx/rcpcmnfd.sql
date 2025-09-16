create table rcpcmnaf
(
  rccmrecn    char(12) default ' ' not null,
  rccmtcnt    char(5) default ' ' not null,
  rccmlnno    char(3) default ' ' not null,
  rccmlnda    char(100) default ' ' not null,
  rccmcrdt    char(8) default ' ' not null,
  rccmcrtm    char(8) default ' ' not null,
  rccmcrud    char(10) default ' ' not null,
  rccmupdt    char(8) default ' ' not null,
  rccmuptm    char(8) default ' ' not null,
  rccmupud    char(10) default ' ' not null,
  rccmspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index rcpcmna1 on rcpcmnaf
(
rccmrecn,
rccmtcnt,
rccmlnno
);
revoke all on rcpcmnaf from public ; 
grant select on rcpcmnaf to public ; 
