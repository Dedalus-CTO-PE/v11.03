create table patsqaaf
(
ptsqcode    varchar2(6),
ptsqtcom    varchar2(1),
ptsqtcod    varchar2(3),
ptsqdcre    varchar2(8),
ptsqlmod    varchar2(8),
ptsqtlmo    varchar2(8),
ptsqmope    varchar2(4),
ptsqspar    varchar2(30),
lf          varchar2(1),
constraint patsqaa1 primary key( 
ptsqcode,
ptsqtcom,
ptsqtcod)
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
create public synonym patsqaaf for patsqaaf;
