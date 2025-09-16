create table ceatamaf
(
  cetaband    char(3) default ' ' not null,
  cetaspc     char(3) default ' ' not null,
  cetapsc     char(7) default ' ' not null,
  cetapqty    decimal(8,2) default 0 not null,
  cetasqty    decimal(8,2) default 0 not null,
  cetaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatama1 on ceatamaf
(
cetaband,
cetaspc,
cetapsc
);
revoke all on ceatamaf from public ; 
grant select on ceatamaf to public ; 
