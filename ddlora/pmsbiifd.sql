create table pmsbiiaf
(
pmbiseid    varchar2(4),
pmbivisn    varchar2(8),
pmbiurno    varchar2(8),
pmbiaddt    varchar2(8),
pmbidsdt    varchar2(8),
pmbiifdt    varchar2(8),
pmbiitdt    varchar2(8),
pmbiiamt    number(8,2),
pmbipdrg    varchar2(9),
pmbicflg    varchar2(1),
pmbistat    varchar2(1),
pmbiprnt    varchar2(1),
pmbispar    varchar2(20),
lf          varchar2(1),
constraint pmsbiia1 primary key( 
pmbiseid,
pmbivisn)
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
create public synonym pmsbiiaf for pmsbiiaf;
