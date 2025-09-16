create table pathlfaf
(
  pthlclmn    varchar2(3) default ' ' not null,
  pthlhfnd    varchar2(6) default ' ' not null,
  pthltabt    varchar2(3) default ' ' not null,
  pthlcasm    varchar2(9) default ' ' not null,
  pthldes1    varchar2(30) default ' ' not null,
  pthldes2    varchar2(35) default ' ' not null,
  pthllreb    number(14,2) default 0 not null,
  pthllpat    number(14,2) default 0 not null,
  pthlcoff    number(5,0) default 0 not null,
  pthlinvb    number(1,0) default 0 not null,
  pthlinvi    number(1,0) default 0 not null,
  pthlninv    number(1,0) default 0 not null,
  pthlcnid    varchar2(6) default ' ' not null,
  pthlspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathlfa1 primary key( 
pthlcnid,
pthlclmn,
pthlhfnd,
pthltabt,
pthlcasm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pathlfa2 on pathlfaf
(
pthlclmn,
pthlhfnd,
pthltabt,
pthlcasm,
pthlcnid
)
  tablespace pas_indx; 
