create table patcodes
(
  tcode       char(2) default ' ' not null,
  acode       char(3) default ' ' not null,
  tdesc       char(20) default ' ' not null,
  thcscod     char(4) default ' ' not null,
  tcform6     decimal(6,0) default 0 not null,
  tcindc1     char(1) default ' ' not null,
  tcindc2     char(1) default ' ' not null,
  tcindc3     char(1) default ' ' not null,
  tcindc4     char(1) default ' ' not null,
  tcindc5     char(1) default ' ' not null,
  ptcoactv    char(1) default ' ' not null,
  tcindc6     char(1) default ' ' not null,
  tcindc7     char(1) default ' ' not null,
  tcindc8     char(1) default ' ' not null,
  tcindc9     char(1) default ' ' not null,
  tcindc10    char(1) default ' ' not null,
  tcindc11    char(1) default ' ' not null,
  ptcdgrpv    char(3) default ' ' not null,
  ptcddeft    char(1) default ' ' not null,
  ptcdnhcp    char(4) default ' ' not null,
  ptcdhoss    char(1) default ' ' not null,
  ptcdldes    char(50) default ' ' not null,
  ptcddfic    char(6) default ' ' not null,
  tcindc12    char(1) default ' ' not null,
  tcindc13    char(1) default ' ' not null,
  tcindc14    char(1) default ' ' not null,
  tcindc15    char(1) default ' ' not null,
  tcindc16    char(1) default ' ' not null,
  tcindc17    char(1) default ' ' not null,
  tcindc18    char(1) default ' ' not null,
  tcindc19    char(1) default ' ' not null,
  tcindc20    char(1) default ' ' not null,
  tcindc21    char(1) default ' ' not null,
  ptcdfelc    char(10) default ' ' not null,
  ptcdudf2    char(10) default ' ' not null,
  ptcdudf3    char(10) default ' ' not null,
  ptcdudf4    char(10) default ' ' not null,
  ptcdcrsc    decimal(4,2) default 0 not null,
  ptcdasc1    char(6) default ' ' not null,
  ptcdasc2    char(6) default ' ' not null,
  ptcdasc3    char(6) default ' ' not null,
  ptcdasc4    char(6) default ' ' not null,
  ptcdasc5    char(6) default ' ' not null,
  tcindc22    char(1) default ' ' not null,
  tcindc23    char(1) default ' ' not null,
  tcindc24    char(1) default ' ' not null,
  tcindc25    char(1) default ' ' not null,
  tcindc26    char(1) default ' ' not null,
  tcindc27    char(1) default ' ' not null,
  tcindc28    char(1) default ' ' not null,
  tcindc29    char(1) default ' ' not null,
  tcindc30    char(1) default ' ' not null,
  tcindc31    char(1) default ' ' not null,
  tcindc32    char(1) default ' ' not null,
  tcindc33    char(1) default ' ' not null,
  tcindc34    char(1) default ' ' not null,
  tcindc35    char(1) default ' ' not null,
  tcindc36    char(1) default ' ' not null,
  tcindc37    char(1) default ' ' not null,
  tcindc38    char(1) default ' ' not null,
  tcindc39    char(1) default ' ' not null,
  tcindc40    char(1) default ' ' not null,
  tcindc41    char(1) default ' ' not null,
  ptcdudf5    char(10) default ' ' not null,
  ptcdudf6    char(10) default ' ' not null,
  ptcdudf7    char(10) default ' ' not null,
  ptcdudf8    char(10) default ' ' not null,
  ptcdudf9    char(10) default ' ' not null,
  ptcdud10    char(10) default ' ' not null,
  ptcdud11    char(10) default ' ' not null,
  ptcdud12    char(10) default ' ' not null,
  ptcdud13    char(10) default ' ' not null,
  ptcdud14    char(10) default ' ' not null,
  ptcdasc6    char(6) default ' ' not null,
  ptcdasc7    char(6) default ' ' not null,
  ptcdasc8    char(6) default ' ' not null,
  ptcdasc9    char(6) default ' ' not null,
  ptcdas10    char(6) default ' ' not null,
  ptcdas11    char(6) default ' ' not null,
  ptcdas12    char(6) default ' ' not null,
  ptcdas13    char(6) default ' ' not null,
  ptcdas14    char(6) default ' ' not null,
  ptcdas15    char(6) default ' ' not null,
  tcspare     char(50) default ' ' not null,
  lf          char(1)
);
create unique index patcode1 on patcodes
(
tcode,
acode
);
create unique index patcode2 on patcodes
(
tcode,
tdesc,
acode
);
create unique index patcode3 on patcodes
(
acode,
tcode
);
create unique index patcode4 on patcodes
(
acode,
tdesc,
tcode
);
create unique index patcode5 on patcodes
(
tcode,
thcscod,
acode
);
revoke all on patcodes from public ; 
grant select on patcodes to public ; 
