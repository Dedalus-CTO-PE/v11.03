create table legdschf
(
  lddurno     varchar2(8) default ' ' not null,
  lddadmno    varchar2(8) default ' ' not null,
  lddate      varchar2(8) default ' ' not null,
  ldtime      varchar2(8) default ' ' not null,
  ldstat      varchar2(3) default ' ' not null,
  lddest      varchar2(3) default ' ' not null,
  lddiag      varchar2(50) default ' ' not null,
  lddiag2     varchar2(50) default ' ' not null,
  ldusd1      varchar2(3) default ' ' not null,
  ldusd2      varchar2(3) default ' ' not null,
  ldusd3      varchar2(3) default ' ' not null,
  ldusd4      varchar2(3) default ' ' not null,
  ldusd5      varchar2(3) default ' ' not null,
  ldfmbs      varchar2(9) default ' ' not null,
  lpdsdmdc    varchar2(4) default ' ' not null,
  lpdsddrg    varchar2(4) default ' ' not null,
  lpdssidx    varchar2(1) default ' ' not null,
  lpdsvogu    varchar2(3) default ' ' not null,
  lpdssref    varchar2(4) default ' ' not null,
  ldspare     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdsch1 primary key( 
lddadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legdsch2 on legdschf
(
lddate,
lddadmno
)
  tablespace pas_indx; 
create unique index legdsch3 on legdschf
(
lddurno,
lddadmno
)
  tablespace pas_indx; 
