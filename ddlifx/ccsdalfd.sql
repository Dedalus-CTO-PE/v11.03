create table ccsdalaf
(
  ccdahcd     char(2) default ' ' not null,
  ccdadpt     char(8) default ' ' not null,
  ccdacty     char(4) default ' ' not null,
  ccdaaty     char(4) default ' ' not null,
  ccdaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsdala1 on ccsdalaf
(
ccdahcd,
ccdadpt,
ccdacty
);
create unique index ccsdala2 on ccsdalaf
(
ccdacty,
ccdahcd,
ccdadpt
);
revoke all on ccsdalaf from public ; 
grant select on ccsdalaf to public ; 
