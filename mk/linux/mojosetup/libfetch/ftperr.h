/*
Copyright (c) 2006-2010 Ryan C. Gordon and others.

   This software is provided 'as-is', without any express or implied warranty.
   In no event will the authors be held liable for any damages arising from
   the use of this software.

   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software in a
   product, an acknowledgment in the product documentation would be
   appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

   3. This notice may not be removed or altered from any source distribution.

       Ryan C. Gordon <icculus@icculus.org>
*/

static struct fetcherr _ftp_errlist[] = {
    { 110, FETCH_OK, "Restart marker reply" },
    { 120, FETCH_TEMP, "Service ready in a few minutes" },
    { 125, FETCH_OK, "Data connection already open; transfer starting" },
    { 150, FETCH_OK, "File status okay; about to open data connection" },
    { 200, FETCH_OK, "Command okay" },
    { 202, FETCH_PROTO, "Command not implemented, superfluous at this site" },
    { 211, FETCH_INFO, "System status, or system help reply" },
    { 212, FETCH_INFO, "Directory status" },
    { 213, FETCH_INFO, "File status" },
    { 214, FETCH_INFO, "Help message" },
    { 215, FETCH_INFO, "Set system type" },
    { 220, FETCH_OK, "Service ready for new user" },
    { 221, FETCH_OK, "Service closing control connection" },
    { 225, FETCH_OK, "Data connection open; no transfer in progress" },
    { 226, FETCH_OK, "Requested file action successful" },
    { 227, FETCH_OK, "Entering Passive Mode" },
    { 229, FETCH_OK, "Entering Extended Passive Mode" },
    { 230, FETCH_OK, "User logged in, proceed" },
    { 250, FETCH_OK, "Requested file action okay, completed" },
    { 257, FETCH_OK, "File/directory created" },
    { 331, FETCH_AUTH, "User name okay, need password" },
    { 332, FETCH_AUTH, "Need account for login" },
    { 350, FETCH_OK, "Requested file action pending further information" },
    { 421, FETCH_DOWN, "Service not available, closing control connection" },
    { 425, FETCH_NETWORK, "Can't open data connection" },
    { 426, FETCH_ABORT, "Connection closed; transfer aborted" },
    { 450, FETCH_UNAVAIL, "File unavailable (e.g., file busy)" },
    { 451, FETCH_SERVER, "Requested action aborted: local error in processing" },
    { 452, FETCH_FULL, "Insufficient storage space in system" },
    { 500, FETCH_PROTO, "Syntax error, command unrecognized" },
    { 501, FETCH_PROTO, "Syntax error in parameters or arguments" },
    { 502, FETCH_PROTO, "Command not implemented" },
    { 503, FETCH_PROTO, "Bad sequence of commands" },
    { 504, FETCH_PROTO, "Command not implemented for that parameter" },
    { 530, FETCH_AUTH, "Not logged in" },
    { 532, FETCH_AUTH, "Need account for storing files" },
    { 535, FETCH_PROTO, "Bug in MediaHawk Video Kernel FTP server" },
    { 550, FETCH_UNAVAIL, "File unavailable (e.g., file not found, no access)" },
    { 551, FETCH_PROTO, "Requested action aborted. Page type unknown" },
    { 552, FETCH_FULL, "Exceeded storage allocation" },
    { 553, FETCH_EXISTS, "File name not allowed" },
    { 999, FETCH_PROTO, "Protocol error" },
    { -1, FETCH_UNKNOWN, "Unknown FTP error" }
};

