create table patregaf
(
dptrgadm    varchar2(8),
dptrgcan    varchar2(8),
ptrgadte    varchar2(8),
ptrgddte    varchar2(8),
ptrgprim    varchar2(9),
ptrghist    varchar2(9),
ptrglat     varchar2(3),
ptrgstag    varchar2(50),
ptrginv1    varchar2(3),
ptrginv2    varchar2(3),
ptrginv3    varchar2(3),
ptrginv4    varchar2(3),
ptrginv5    varchar2(3),
ptrginv6    varchar2(3),
ptrginv7    varchar2(3),
ptrgread    number(1,0),
ptrgspar    varchar2(50),
lf          varchar2(1),
constraint patrega1 primary key( 
dptrgadm,
dptrgcan)
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
create public synonym patregaf for patregaf;
