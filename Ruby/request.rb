require "net/http"
require 'httparty'

# Using Net/Http

r = Net::HTTP.get("bancocn.com", "/") # Return html
s = Net::HTTP.get_response("bancocn.com", "/").code # Status Code
b = Net::HTTP.get_response("bancocn.com", "/").body

puts s, b

# Using HttParty

r = HTTParty.get("bancocn.com")
r.response
