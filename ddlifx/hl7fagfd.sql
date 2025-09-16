create table hl7fagaf
(
  hlagrsid    char(64) default ' ' not null,
  hlagvrid    char(10) default ' ' not null,
  hlagcnt1    char(4) default ' ' not null,
  hlagrare    char(200) default ' ' not null,
  hlagraty    char(255) default ' ' not null,
  hlagradi    char(200) default ' ' not null,
  hlagraus    char(50) default ' ' not null,
  hlagrisy    char(255) default ' ' not null,
  hlagriva    char(200) default ' ' not null,
  hlagritx    char(200) default ' ' not null,
  hlagrcsy    char(255) default ' ' not null,
  hlagrcve    char(200) default ' ' not null,
  hlagrcco    char(50) default ' ' not null,
  hlagrcdi    char(200) default ' ' not null,
  hlagrcus    char(10) default ' ' not null,
  hlagrpst    char(40) default ' ' not null,
  hlagrren    char(40) default ' ' not null,
  hlagspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faga1 on hl7fagaf
(
hlagrsid,
hlagvrid,
hlagcnt1
);
revoke all on hl7fagaf from public ; 
grant select on hl7fagaf to public ; 
