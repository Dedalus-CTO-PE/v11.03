create table pmssedaf
(
pmsearid    varchar2(20),
pmserptc    varchar2(3),
pmsescod    varchar2(11),
pmsesrvc    varchar2(3),
pmsesfec    varchar2(4),
pmsesexc    varchar2(3),
pmsesfet    varchar2(80),
pmsespar    varchar2(30),
lf          varchar2(1),
constraint pmsseda1 primary key( 
pmsearid,
pmserptc,
pmsescod,
pmsesrvc,
pmsesfec,
pmsesexc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmssedaf for pmssedaf;
