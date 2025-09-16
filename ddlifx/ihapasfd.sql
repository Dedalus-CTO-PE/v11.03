create table ihapasaf
(
  secode      char(4) default ' ' not null,
  secnumb     char(20) default ' ' not null,
  secuser     char(35) default ' ' not null,
  secacct     char(4) default ' ' not null,
  secnumb1    char(10) default ' ' not null,
  secnumb2    char(25) default ' ' not null,
  secdirct    decimal(2,0) default 0 not null,
  secmenu     char(8) default ' ' not null,
  secprint    char(2) default ' ' not null,
  secdept     char(3) default ' ' not null,
  secmnnum    char(3) default ' ' not null,
  secspare    char(18) default ' ' not null,
  lf          char(1)
);
create unique index ihapass1 on ihapasaf
(
secode
);
create unique index ihapass2 on ihapasaf
(
secuser,
secode
);
revoke all on ihapasaf from public ; 
grant select on ihapasaf to public ; 
