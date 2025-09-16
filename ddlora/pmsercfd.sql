create table pmsercaf
(
pmrcarid    varchar2(20),
pmrcrptc    varchar2(3),
pmrctype    varchar2(3),
pmrcline    varchar2(3),
pmrcdata    varchar2(100),
pmrcudat    varchar2(8),
pmrcutim    varchar2(8),
pmrcspar    varchar2(30),
lf          varchar2(1),
constraint pmserca1 primary key( 
pmrcarid,
pmrcrptc,
pmrctype,
pmrcline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsercaf for pmsercaf;
