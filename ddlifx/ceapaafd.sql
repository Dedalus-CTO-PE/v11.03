create table ceapaaaf
(
  cepaspc     char(3) default ' ' not null,
  cepapsc     char(7) default ' ' not null,
  cepayear    char(4) default ' ' not null,
  cepaper     char(2) default ' ' not null,
  cepaqty     decimal(14,2) default 0 not null,
  cepacst1    decimal(14,2) default 0 not null,
  cepacst2    decimal(14,2) default 0 not null,
  cepacst3    decimal(14,2) default 0 not null,
  cepacst4    decimal(14,2) default 0 not null,
  cepacst5    decimal(14,2) default 0 not null,
  cepaspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ceapaaa1 on ceapaaaf
(
cepaspc,
cepapsc,
cepayear,
cepaper
);
revoke all on ceapaaaf from public ; 
grant select on ceapaaaf to public ; 
