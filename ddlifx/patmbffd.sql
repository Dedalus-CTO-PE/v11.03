create table patmbfaf
(
  ptmbclam    char(3) default ' ' not null,
  ptmbhfnd    char(6) default ' ' not null,
  ptmbatyp    char(3) default ' ' not null,
  ptmbcntr    char(6) default ' ' not null,
  ptmbusid    char(10) default ' ' not null,
  ptmbspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index patmbfa1 on patmbfaf
(
ptmbclam,
ptmbhfnd,
ptmbatyp
);
create unique index patmbfa2 on patmbfaf
(
ptmbhfnd,
ptmbclam,
ptmbatyp
);
create unique index patmbfa3 on patmbfaf
(
ptmbatyp,
ptmbclam,
ptmbhfnd
);
create unique index patmbfa4 on patmbfaf
(
ptmbcntr,
ptmbclam,
ptmbhfnd,
ptmbatyp
);
revoke all on patmbfaf from public ; 
grant select on patmbfaf to public ; 
