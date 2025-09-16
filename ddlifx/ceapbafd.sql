create table ceapbaaf
(
  cepbpsc     char(7) default ' ' not null,
  cepbyear    char(4) default ' ' not null,
  cepbper     char(2) default ' ' not null,
  cepbqty     decimal(14,2) default 0 not null,
  cepbcst1    decimal(14,2) default 0 not null,
  cepbcst2    decimal(14,2) default 0 not null,
  cepbcst3    decimal(14,2) default 0 not null,
  cepbcst4    decimal(14,2) default 0 not null,
  cepbcst5    decimal(14,2) default 0 not null,
  cepbspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ceapbaa1 on ceapbaaf
(
cepbpsc,
cepbyear,
cepbper
);
revoke all on ceapbaaf from public ; 
grant select on ceapbaaf to public ; 
