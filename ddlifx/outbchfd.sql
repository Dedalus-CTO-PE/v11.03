create table outaudbc
(
otbcaudd    char(8),
otbcaudt    char(8),
otbcaudp    char(2),
otbcaudr    char(1),
otbcauds    decimal(1,0),
otbcaudo    char(4),
otbcclm     char(3),
otbcbrd     char(6),
otbcdept    char(3),
dotbcage    char(3),
dotbcnvi    char(3),
otbcdesc    char(30),
dotbcppo    decimal(14,2),
dotbcbpo    decimal(14,2),
otbcninv    decimal(1,0),
otbcitem    char(3),
otbcspar    char(12),
lf          char(1)
);
create index outaudbc on outaudbc
(
otbcaudd,
otbcaudt,
otbcaudp,
otbcaudr
);
revoke all on outaudbc from public ; 
grant select on outaudbc to public ; 
create table outbchaf
(
otbcclm     char(3),
otbcbrd     char(6),
otbcdept    char(3),
dotbcage    char(3),
dotbcnvi    char(3),
otbcdesc    char(30),
dotbcppo    decimal(14,2),
dotbcbpo    decimal(14,2),
otbcninv    decimal(1,0),
otbcitem    char(3),
otbcspar    char(12),
lf          char(1)
);
create unique index outbcha1 on outbchaf
(
otbcclm,
otbcbrd,
otbcdept,
dotbcage,
dotbcnvi
);
revoke all on outbchaf from public ; 
grant select on outbchaf to public ; 
