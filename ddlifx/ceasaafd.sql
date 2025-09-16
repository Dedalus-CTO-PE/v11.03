create table ceasaaaf
(
  cesaspc     char(3) default ' ' not null,
  cesayear    char(4) default ' ' not null,
  cesaper     char(2) default ' ' not null,
  cesacst1    decimal(14,2) default 0 not null,
  cesacst2    decimal(14,2) default 0 not null,
  cesacst3    decimal(14,2) default 0 not null,
  cesacst4    decimal(14,2) default 0 not null,
  cesacst5    decimal(14,2) default 0 not null,
  cesagla     decimal(14,2) default 0 not null,
  cesaglb     decimal(14,2) default 0 not null,
  cesaspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ceasaaa1 on ceasaaaf
(
cesaspc,
cesayear,
cesaper
);
revoke all on ceasaaaf from public ; 
grant select on ceasaaaf to public ; 
