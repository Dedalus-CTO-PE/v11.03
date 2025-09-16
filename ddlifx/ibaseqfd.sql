create table ibaseqaf
(
  ibsqtype    char(8) default ' ' not null,
  ibsqnext    decimal(10,0) default 0 not null,
  ibsqdesc    char(50) default ' ' not null,
  ibsqmaxm    decimal(10,0) default 0 not null,
  ibsqspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index ibaseqa1 on ibaseqaf
(
ibsqtype
);
revoke all on ibaseqaf from public ; 
grant select on ibaseqaf to public ; 
