create table obsecoaf
(
  obeceaid    char(20) default ' ' not null,
  obeccpid    char(4) default ' ' not null,
  obecindt    char(8) default ' ' not null,
  obecctyp    char(3) default ' ' not null,
  obecintm    char(8) default ' ' not null,
  obecinus    char(10) default ' ' not null,
  obecfext    char(6) default ' ' not null,
  obecslid    char(4) default ' ' not null,
  obecurno    char(8) default ' ' not null,
  obecspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index obsecoa1 on obsecoaf
(
obeceaid,
obeccpid
);
create unique index obsecoa2 on obsecoaf
(
obecurno,
obeceaid,
obeccpid
);
revoke all on obsecoaf from public ; 
grant select on obsecoaf to public ; 
