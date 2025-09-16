create table fmsbnkaf
(
  fmbnbnk     char(15) default ' ' not null,
  fmbnunq     char(5) default ' ' not null,
  fmbnref     char(15) default ' ' not null,
  fmbnled     char(2) default ' ' not null,
  fmbnacc     char(12) default ' ' not null,
  fmbndat     char(8) default ' ' not null,
  fmbntyp     char(1) default ' ' not null,
  fmbnpre     char(1) default ' ' not null,
  fmbnpdt     char(8) default ' ' not null,
  fmbnamt     decimal(14,2) default 0 not null,
  fmbnfyr     char(4) default ' ' not null,
  fmbnbch     char(5) default ' ' not null,
  fmbnlno     char(5) default ' ' not null,
  fmbncre     char(5) default ' ' not null,
  fmbnnam     char(35) default ' ' not null,
  fmbnspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsbnka1 on fmsbnkaf
(
fmbnbnk,
fmbnunq
);
create unique index fmsbnka2 on fmsbnkaf
(
fmbnbnk,
fmbntyp,
fmbnref,
fmbnunq
);
create unique index fmsbnka3 on fmsbnkaf
(
fmbnbnk,
fmbntyp,
fmbndat,
fmbnref,
fmbnunq
);
create unique index fmsbnka4 on fmsbnkaf
(
fmbnbch,
fmbnlno,
fmbnbnk,
fmbnunq
);
create unique index fmsbnka5 on fmsbnkaf
(
fmbnbnk,
fmbntyp,
fmbnnam,
fmbnunq
);
create  index fmsbnka6 on fmsbnkaf
(
fmbnbnk,
fmbnpre,
fmbnpdt
);
revoke all on fmsbnkaf from public ; 
grant select on fmsbnkaf to public ; 
