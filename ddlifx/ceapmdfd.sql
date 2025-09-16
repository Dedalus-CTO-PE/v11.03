create table ceapmdaf
(
  cepmmod     char(1) default ' ' not null,
  cepmdrgc    char(4) default ' ' not null,
  cepmpcas    decimal(12,2) default 0 not null,
  cepmpday    decimal(12,2) default 0 not null,
  cepmspa     char(39) default ' ' not null,
  lf          char(1)
);
create unique index ceapmda1 on ceapmdaf
(
cepmmod,
cepmdrgc
);
revoke all on ceapmdaf from public ; 
grant select on ceapmdaf to public ; 
