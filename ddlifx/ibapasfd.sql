create table ihapassf
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
  secmail     char(8) default ' ' not null,
  secualev    char(1) default ' ' not null,
  sectruid    char(6) default ' ' not null,
  secspare    char(3) default ' ' not null,
  lf          char(1)
);
create unique index ihapass1 on ihapassf
(
secode
);
create unique index ihapass2 on ihapassf
(
secuser,
secode
);
create unique index ihapass3 on ihapassf
(
secnumb,
secode
);
revoke all on ihapassf from public ; 
grant select on ihapassf to public ; 
