create table pmsrdiaf
(
  pmricntr    char(6) default ' ' not null,
  pmrictyp    char(2) default ' ' not null,
  pmristyp    char(1) default ' ' not null,
  pmriicdc    char(20) default ' ' not null,
  pmricdat    char(8) default ' ' not null,
  pmrictim    char(8) default ' ' not null,
  pmricuid    char(10) default ' ' not null,
  pmriudat    char(8) default ' ' not null,
  pmriutim    char(8) default ' ' not null,
  pmriuuid    char(10) default ' ' not null,
  pmrispar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsrdia1 on pmsrdiaf
(
pmricntr,
pmrictyp,
pmristyp,
pmriicdc
);
create unique index pmsrdia2 on pmsrdiaf
(
pmrictyp,
pmristyp,
pmriicdc,
pmricntr
);
create unique index pmsrdia3 on pmsrdiaf
(
pmristyp,
pmriicdc,
pmricntr,
pmrictyp
);
create unique index pmsrdia4 on pmsrdiaf
(
pmricntr,
pmristyp,
pmriicdc,
pmrictyp
);
revoke all on pmsrdiaf from public ; 
grant select on pmsrdiaf to public ; 
