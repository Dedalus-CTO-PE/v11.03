create table hl7fa1af
(
  hla1rsid    char(64) default ' ' not null,
  hla1vrid    char(10) default ' ' not null,
  hla1cnt1    char(4) default ' ' not null,
  hla1tsys    char(255) default ' ' not null,
  hla1tver    char(200) default ' ' not null,
  hla1tcod    char(50) default ' ' not null,
  hla1tdis    char(200) default ' ' not null,
  hla1tusl    char(10) default ' ' not null,
  hla1tsy2    char(255) default ' ' not null,
  hla1tve2    char(200) default ' ' not null,
  hla1tco2    char(50) default ' ' not null,
  hla1tdi2    char(200) default ' ' not null,
  hla1tus2    char(10) default ' ' not null,
  hla1clst    char(200) default ' ' not null,
  hla1curi    char(255) default ' ' not null,
  hla1cver    char(200) default ' ' not null,
  hla1ccod    char(50) default ' ' not null,
  hla1cdis    char(200) default ' ' not null,
  hla1cusl    char(10) default ' ' not null,
  hla1vlst    char(200) default ' ' not null,
  hla1vuri    char(255) default ' ' not null,
  hla1vver    char(200) default ' ' not null,
  hla1vcod    char(50) default ' ' not null,
  hla1vdis    char(200) default ' ' not null,
  hla1vusl    char(10) default ' ' not null,
  hla1type    char(50) default ' ' not null,
  hla1spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fa1a1 on hl7fa1af
(
hla1rsid,
hla1vrid,
hla1cnt1
);
create unique index hl7fa1a2 on hl7fa1af
(
hla1cnt1,
hla1rsid,
hla1vrid
);
revoke all on hl7fa1af from public ; 
grant select on hl7fa1af to public ; 
