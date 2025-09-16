create table hicrchaf
(
  hcrhrnum    char(3) default ' ' not null,
  hcrhcntr    char(5) default ' ' not null,
  hcrhcnum    decimal(3,0) default 0 not null,
  hcrhpmci    char(8) default ' ' not null,
  hcrhsamt    decimal(14,2) default 0 not null,
  hcrhfnam    char(30) default ' ' not null,
  hcrhspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index hicrcha1 on hicrchaf
(
hcrhrnum,
hcrhcntr
);
revoke all on hicrchaf from public ; 
grant select on hicrchaf to public ; 
