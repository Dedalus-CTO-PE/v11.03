create table emrunkaf
(
  demunadm    char(8) default ' ' not null,
  emundet1    char(50) default ' ' not null,
  emundet2    char(50) default ' ' not null,
  emunsex     char(1) default ' ' not null,
  emunage     decimal(3,0) default 0 not null,
  emunsnam    char(20) default ' ' not null,
  emungnam    char(20) default ' ' not null,
  emunbdat    char(8) default ' ' not null,
  emunspar    char(3) default ' ' not null,
  lf          char(1)
);
create unique index emrunka1 on emrunkaf
(
demunadm
);
revoke all on emrunkaf from public ; 
grant select on emrunkaf to public ; 
