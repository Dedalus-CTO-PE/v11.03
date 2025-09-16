create table pmsedwaf
(
  pmewurno    char(8) default ' ' not null,
  pmewtype    char(3) default ' ' not null,
  pmewoldv    char(250) default ' ' not null,
  pmewnewv    char(250) default ' ' not null,
  pmewcdat    char(8) default ' ' not null,
  pmewctim    char(8) default ' ' not null,
  pmewcuid    char(10) default ' ' not null,
  pmewspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsedwa1 on pmsedwaf
(
pmewcdat,
pmewctim,
pmewurno,
pmewtype
);
create unique index pmsedwa2 on pmsedwaf
(
pmewurno,
pmewtype,
pmewcdat,
pmewctim
);
revoke all on pmsedwaf from public ; 
grant select on pmsedwaf to public ; 
