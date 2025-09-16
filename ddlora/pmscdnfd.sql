create table pmscdnaf
(
pmdnvisn    varchar2(8),
pmdnurno    varchar2(8),
pmdnstat    varchar2(1),
pmdnpw01    varchar2(5),
pmdnpw02    varchar2(5),
pmdnpw03    varchar2(5),
pmdnpw04    varchar2(5),
pmdnpw05    varchar2(5),
pmdnpw06    varchar2(5),
pmdnpw07    varchar2(5),
pmdnpw08    varchar2(5),
pmdnpw09    varchar2(5),
pmdnpw10    varchar2(5),
pmdnspar    varchar2(50),
lf          varchar2(1),
constraint pmscdna1 primary key( 
pmdnvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmscdnaf for pmscdnaf;
create unique index pmscdna2 on pmscdnaf
(
pmdnurno,
pmdnvisn
)
  tablespace pas_indx; 
