create table pmssesaf
(
pmesarid    varchar2(20),
pmesrptc    varchar2(3),
pmesscod    varchar2(11),
pmessrvc    varchar2(3),
pmessctc    varchar2(1),
pmessvid    varchar2(4),
pmescamt    varchar2(9),
pmessdte    varchar2(8),
pmesfbam    varchar2(9),
pmesitem    varchar2(5),
pmesmbam    varchar2(9),
pmesmexc    varchar2(3),
pmessfac    varchar2(1),
pmessfee    varchar2(9),
pmesspar    varchar2(30),
lf          varchar2(1),
constraint pmssesa1 primary key( 
pmesarid,
pmesrptc,
pmesscod,
pmessrvc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmssesaf for pmssesaf;
