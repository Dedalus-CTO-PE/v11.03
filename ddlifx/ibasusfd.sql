create table ibasusaf
(
  ibsumnth    char(6) default ' ' not null,
  ibsuprog    char(8) default ' ' not null,
  ibsunumb    decimal(6,0) default 0 not null,
  ibsuspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index ibasusa1 on ibasusaf
(
ibsumnth,
ibsuprog
);
create unique index ibasusa2 on ibasusaf
(
ibsuprog,
ibsumnth
);
revoke all on ibasusaf from public ; 
grant select on ibasusaf to public ; 
