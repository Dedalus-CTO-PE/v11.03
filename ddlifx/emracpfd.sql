create table emracpaf
(
  emapcode    char(30) default ' ' not null,
  emapfdat    char(8) default ' ' not null,
  emaptdat    char(8) default ' ' not null,
  emapage1    decimal(9,6) default 0 not null,
  emapage2    decimal(9,6) default 0 not null,
  emaptct1    decimal(9,6) default 0 not null,
  emaptct2    decimal(9,6) default 0 not null,
  emaptct3    decimal(9,6) default 0 not null,
  emaptct4    decimal(9,6) default 0 not null,
  emaptct5    decimal(9,6) default 0 not null,
  emapcdat    char(8) default ' ' not null,
  emapctim    char(8) default ' ' not null,
  emapcuid    char(10) default ' ' not null,
  emapudat    char(8) default ' ' not null,
  emaputim    char(8) default ' ' not null,
  emapuuid    char(10) default ' ' not null,
  emapaflg    char(1) default ' ' not null,
  emapspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emracpa1 on emracpaf
(
emapcode,
emapfdat
);
revoke all on emracpaf from public ; 
grant select on emracpaf to public ; 
