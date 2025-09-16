create table ceanamaf
(
  cenawrd     char(3) default ' ' not null,
  cenaspc     char(3) default ' ' not null,
  cenapsc     char(7) default ' ' not null,
  cenahqty    decimal(8,2) default 0 not null,
  cenadqty    decimal(8,2) default 0 not null,
  cenaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceanama1 on ceanamaf
(
cenawrd,
cenaspc,
cenapsc
);
revoke all on ceanamaf from public ; 
grant select on ceanamaf to public ; 
