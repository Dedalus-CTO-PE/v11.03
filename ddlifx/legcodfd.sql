create table legcodes
(
  ltcode      char(2) default ' ' not null,
  lacode      char(3) default ' ' not null,
  ltdesc      char(20) default ' ' not null,
  lthcscod    char(4) default ' ' not null,
  ltcform6    decimal(6,0) default 0 not null,
  ltcindc1    char(1) default ' ' not null,
  ltcindc2    char(1) default ' ' not null,
  ltcindc3    char(1) default ' ' not null,
  ltcindc4    char(1) default ' ' not null,
  ltcindc5    char(1) default ' ' not null,
  lpcoactv    char(1) default ' ' not null,
  ltcindc6    char(1) default ' ' not null,
  ltcindc7    char(1) default ' ' not null,
  ltcindc8    char(1) default ' ' not null,
  ltcindc9    char(1) default ' ' not null,
  ltcndc10    char(1) default ' ' not null,
  ltcndc11    char(1) default ' ' not null,
  lpcdgrpv    char(3) default ' ' not null,
  lpcddeft    char(1) default ' ' not null,
  lpcdnhcp    char(4) default ' ' not null,
  ltcspare    char(11) default ' ' not null,
  lf          char(1)
);
create unique index legcode1 on legcodes
(
ltcode,
lacode
);
create unique index legcode2 on legcodes
(
ltcode,
ltdesc,
lacode
);
create unique index legcode3 on legcodes
(
lacode,
ltcode
);
create unique index legcode4 on legcodes
(
lacode,
ltdesc,
ltcode
);
revoke all on legcodes from public ; 
grant select on legcodes to public ; 
