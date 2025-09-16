create table primabdf
(
prmainvn    varchar2(8),
dprmaunq    varchar2(8),
prmarefn    varchar2(20),
prmapols    varchar2(20),
prmasoln    varchar2(30),
prmasad1    varchar2(25),
prmasad2    varchar2(25),
prmasad3    varchar2(25),
prmaspcd    varchar2(4),
prmasolt    varchar2(12),
prmarego    varchar2(36),
prmaaloc    varchar2(40),
prmaatim    varchar2(5),
prmaengd    varchar2(20),
prmainjd    varchar2(30),
prmaudf1    varchar2(3),
prmaudf2    varchar2(3),
prmamsev    varchar2(30),
prmarsev    varchar2(20),
prmaodd1    varchar2(30),
prmaodd2    varchar2(30),
prmaodd3    varchar2(30),
prmaspar    varchar2(4),
lf          varchar2(1),
constraint primabd1 primary key( 
prmainvn,
dprmaunq)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym primabdf for primabdf;
create unique index primabd2 on primabdf
(
dprmaunq,
prmainvn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
