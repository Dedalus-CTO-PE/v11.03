create table pmsadwaf
(
  pmawvisn    char(8) default ' ' not null,
  pmawtype    char(3) default ' ' not null,
  pmawoldv    char(250) default ' ' not null,
  pmawnewv    char(250) default ' ' not null,
  pmawcdat    char(8) default ' ' not null,
  pmawctim    char(8) default ' ' not null,
  pmawcuid    char(10) default ' ' not null,
  pmawspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsadwa1 on pmsadwaf
(
pmawcdat,
pmawctim,
pmawvisn,
pmawtype
);
create unique index pmsadwa2 on pmsadwaf
(
pmawvisn,
pmawtype,
pmawcdat,
pmawctim
);
revoke all on pmsadwaf from public ; 
grant select on pmsadwaf to public ; 
