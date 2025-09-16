create table ceapcdaf
(
  cepcdrgc    char(4) default ' ' not null,
  cepcnur     decimal(12,2) default 0 not null,
  cepcthe     decimal(12,2) default 0 not null,
  cepcpha     decimal(12,2) default 0 not null,
  cepcicu     decimal(12,2) default 0 not null,
  cepcall     decimal(12,2) default 0 not null,
  cepcmss     decimal(12,2) default 0 not null,
  cepctax     decimal(12,2) default 0 not null,
  cepcovh     decimal(12,2) default 0 not null,
  cepccat     decimal(12,2) default 0 not null,
  cepcdep     decimal(12,2) default 0 not null,
  cepcoth     decimal(12,2) default 0 not null,
  cepcalos    decimal(8,2) default 0 not null,
  cepcnwg     decimal(10,4) default 0 not null,
  cepcspa     char(39) default ' ' not null,
  lf          char(1)
);
create unique index ceapcda1 on ceapcdaf
(
cepcdrgc
);
revoke all on ceapcdaf from public ; 
grant select on ceapcdaf to public ; 
