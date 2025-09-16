create table legcodes
(
  ltcode      varchar2(2) default ' ' not null,
  lacode      varchar2(3) default ' ' not null,
  ltdesc      varchar2(20) default ' ' not null,
  lthcscod    varchar2(4) default ' ' not null,
  ltcform6    number(6,0) default 0 not null,
  ltcindc1    varchar2(1) default ' ' not null,
  ltcindc2    varchar2(1) default ' ' not null,
  ltcindc3    varchar2(1) default ' ' not null,
  ltcindc4    varchar2(1) default ' ' not null,
  ltcindc5    varchar2(1) default ' ' not null,
  lpcoactv    varchar2(1) default ' ' not null,
  ltcindc6    varchar2(1) default ' ' not null,
  ltcindc7    varchar2(1) default ' ' not null,
  ltcindc8    varchar2(1) default ' ' not null,
  ltcindc9    varchar2(1) default ' ' not null,
  ltcndc10    varchar2(1) default ' ' not null,
  ltcndc11    varchar2(1) default ' ' not null,
  lpcdgrpv    varchar2(3) default ' ' not null,
  lpcddeft    varchar2(1) default ' ' not null,
  lpcdnhcp    varchar2(4) default ' ' not null,
  ltcspare    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legcode1 primary key( 
ltcode,
lacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legcode2 on legcodes
(
ltcode,
ltdesc,
lacode
)
  tablespace pas_indx; 
create unique index legcode3 on legcodes
(
lacode,
ltcode
)
  tablespace pas_indx; 
create unique index legcode4 on legcodes
(
lacode,
ltdesc,
ltcode
)
  tablespace pas_indx; 
