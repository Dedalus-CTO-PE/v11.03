create table ibadptaf
(
  ibdpdept    char(6) default ' ' not null,
  ibdpdesc    char(80) default ' ' not null,
  ibdphosp    char(3) default ' ' not null,
  ibdpward    char(6) default ' ' not null,
  ibdpemrs    char(3) default ' ' not null,
  ibdpoutl    char(10) default ' ' not null,
  ibdpspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index ibadpta1 on ibadptaf
(
ibdpdept
);
create unique index ibadpta2 on ibadptaf
(
ibdphosp,
ibdpdept
);
create unique index ibadpta3 on ibadptaf
(
ibdpward,
ibdpdept
);
create unique index ibadpta4 on ibadptaf
(
ibdpemrs,
ibdpdept
);
create unique index ibadpta5 on ibadptaf
(
ibdpoutl,
ibdpdept
);
revoke all on ibadptaf from public ; 
grant select on ibadptaf to public ; 
