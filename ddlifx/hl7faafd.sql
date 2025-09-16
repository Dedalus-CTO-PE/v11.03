create table hl7faaaf
(
  hlaarsid    char(64) default ' ' not null,
  hlaavrid    char(10) default ' ' not null,
  hlaacnt1    char(4) default ' ' not null,
  hlaacnt2    char(4) default ' ' not null,
  hlaaidus    char(20) default ' ' not null,
  hlaaidsy    char(255) default ' ' not null,
  hlaaidve    char(50) default ' ' not null,
  hlaaidcd    char(50) default ' ' not null,
  hlaaiddi    char(200) default ' ' not null,
  hlaaidsl    char(1) default ' ' not null,
  hlaaidtx    char(200) default ' ' not null,
  hlaasyst    char(255) default ' ' not null,
  hlaaidva    char(200) default ' ' not null,
  hlaapsta    char(40) default ' ' not null,
  hlaapend    char(40) default ' ' not null,
  hlaaaref    char(200) default ' ' not null,
  hlaaatyp    char(255) default ' ' not null,
  hlaaadis    char(200) default ' ' not null,
  hlaaiuse    char(40) default ' ' not null,
  hlaaisys    char(255) default ' ' not null,
  hlaaival    char(200) default ' ' not null,
  hlaaitxt    char(200) default ' ' not null,
  hlaacsys    char(255) default ' ' not null,
  hlaacver    char(200) default ' ' not null,
  hlaaccod    char(50) default ' ' not null,
  hlaacdis    char(200) default ' ' not null,
  hlaacuss    char(10) default ' ' not null,
  hlaapstr    char(40) default ' ' not null,
  hlaapren    char(40) default ' ' not null,
  hlaaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faaa1 on hl7faaaf
(
hlaarsid,
hlaavrid,
hlaacnt1,
hlaacnt2
);
revoke all on hl7faaaf from public ; 
grant select on hl7faaaf to public ; 
