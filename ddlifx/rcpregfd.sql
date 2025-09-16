create table rcpregaf
(
  regcode     char(3) default ' ' not null,
  regdesc     char(35) default ' ' not null,
  regchqcd    char(15) default ' ' not null,
  reggenld    char(14) default ' ' not null,
  reggenbk    char(14) default ' ' not null,
  reggroup    char(3) default ' ' not null,
  regibacd    decimal(2,0) default 0 not null,
  regsundt    decimal(2,0) default 0 not null,
  regdiss     char(5) default ' ' not null,
  regresp     char(4) default ' ' not null,
  reggends    char(14) default ' ' not null,
  reggst      char(6) default ' ' not null,
  registrg    char(2) default ' ' not null,
  reghosp     char(3) default ' ' not null,
  regactiv    char(1) default ' ' not null,
  reggendb    char(14) default ' ' not null,
  reggengs    char(14) default ' ' not null,
  rcrecsur    char(3) default ' ' not null,
  regspare    char(47) default ' ' not null,
  lf          char(1)
);
create unique index rcprega1 on rcpregaf
(
regcode
);
create unique index rcprega2 on rcpregaf
(
reggroup,
regcode
);
create unique index rcprega3 on rcpregaf
(
registrg,
regcode
);
create unique index rcprega4 on rcpregaf
(
regdesc,
regcode
);
revoke all on rcpregaf from public ; 
grant select on rcpregaf to public ; 
