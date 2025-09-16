create table ceadefaf
(
  cededty     char(1) default ' ' not null,
  cedespc     char(3) default ' ' not null,
  cedepsc     char(7) default ' ' not null,
  cedeqty1    decimal(8,2) default 0 not null,
  cedeqty2    decimal(8,2) default 0 not null,
  cedespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceadefa1 on ceadefaf
(
cededty,
cedespc,
cedepsc
);
revoke all on ceadefaf from public ; 
grant select on ceadefaf to public ; 
