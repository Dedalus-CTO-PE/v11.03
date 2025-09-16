create table pmsccdaf
(
  pmcdurno    char(8) default ' ' not null,
  pmcdctyp    char(3) default ' ' not null,
  pmcdcnum    char(20) default ' ' not null,
  pmcdexdt    char(8) default ' ' not null,
  pmcdcdat    char(8) default ' ' not null,
  pmcdctim    char(8) default ' ' not null,
  pmcdcuid    char(10) default ' ' not null,
  pmcdudat    char(8) default ' ' not null,
  pmcdutim    char(8) default ' ' not null,
  pmcduuid    char(10) default ' ' not null,
  pmcddvac    char(3) default ' ' not null,
  pmcdspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index pmsccda1 on pmsccdaf
(
pmcdurno,
pmcdexdt,
pmcdctyp
);
create unique index pmsccda2 on pmsccdaf
(
pmcdctyp,
pmcdexdt,
pmcdurno
);
create unique index pmsccda3 on pmsccdaf
(
pmcdctyp,
pmcdcnum,
pmcdexdt,
pmcdurno
);
revoke all on pmsccdaf from public ; 
grant select on pmsccdaf to public ; 
