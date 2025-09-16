create table pmsamnaf
(
  pmamreqn    char(10) default ' ' not null,
  pmamurno    char(8) default ' ' not null,
  pmamvisn    char(8) default ' ' not null,
  pmamcatg    char(2) default ' ' not null,
  pmamcode    char(3) default ' ' not null,
  pmamcomm    char(200) default ' ' not null,
  pmamcdat    char(8) default ' ' not null,
  pmamctim    char(8) default ' ' not null,
  pmamcuid    char(10) default ' ' not null,
  pmamspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsamna1 on pmsamnaf
(
pmamreqn,
pmamcatg,
pmamcode
);
revoke all on pmsamnaf from public ; 
grant select on pmsamnaf to public ; 
