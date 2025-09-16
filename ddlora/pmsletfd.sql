create table pmsletaf
(
pmleseid    varchar2(4),
pmlesedc    varchar2(35),
pmleurfr    varchar2(8),
pmleurto    varchar2(8),
pmlesufr    varchar2(20),
pmlesuto    varchar2(20),
pmleadfr    varchar2(8),
pmleadto    varchar2(8),
pmleddfr    varchar2(8),
pmleddto    varchar2(8),
pmleatfr    varchar2(3),
pmleatto    varchar2(3),
pmleclfr    varchar2(3),
pmleclto    varchar2(3),
pmleccfr    varchar2(3),
pmleccto    varchar2(3),
pmleacfr    varchar2(3),
pmleacto    varchar2(3),
pmlersfr    varchar2(3),
pmlersto    varchar2(3),
pmledsfr    varchar2(3),
pmledsto    varchar2(3),
pmlecbfr    varchar2(3),
pmlecbto    varchar2(3),
pmlerlfr    varchar2(3),
pmlerlto    varchar2(3),
pmlehffr    varchar2(6),
pmlehfto    varchar2(6),
pmledcst    varchar2(1),
pmlespar    varchar2(31),
lf          varchar2(1),
constraint pmsleta1 primary key( 
pmleseid)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsletaf for pmsletaf;
