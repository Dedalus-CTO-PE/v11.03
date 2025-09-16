create table patifcaf
(
  ptfcclty    char(3) default ' ' not null,
  ptfcfund    char(6) default ' ' not null,
  ptfchtab    char(3) default ' ' not null,
  ptfcrtyp    char(1) default ' ' not null,
  ptfccmat    char(9) default ' ' not null,
  ptfcctyp    char(3) default ' ' not null,
  ptfcramt    decimal(14,2) default 0 not null,
  ptfcpamt    decimal(14,2) default 0 not null,
  ptfcspre    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patifca1 on patifcaf
(
ptfcclty,
ptfcfund,
ptfchtab,
ptfcrtyp,
ptfccmat,
ptfcctyp
);
create unique index patifca2 on patifcaf
(
ptfcfund,
ptfchtab,
ptfcclty,
ptfcrtyp,
ptfccmat,
ptfcctyp
);
create unique index patifca3 on patifcaf
(
ptfcrtyp,
ptfccmat,
ptfcclty,
ptfcfund,
ptfchtab,
ptfcctyp
);
create unique index patifca4 on patifcaf
(
ptfcrtyp,
ptfccmat,
ptfcfund,
ptfchtab,
ptfcclty,
ptfcctyp
);
revoke all on patifcaf from public ; 
grant select on patifcaf to public ; 
